//
//  PlayerCell.h
//  DoRatings
//
//  Created by Dan Orlando on 11/7/13.
//  Copyright (c) 2013 Dan Orlando. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
