//
//  PlayersViewController.h
//  DoRatings
//
//  Created by Dan Orlando on 11/7/13.
//  Copyright (c) 2013 Dan Orlando. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
