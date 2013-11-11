//
//  Player.h
//  DoRatings
//
//  Created by Dan Orlando on 11/7/13.
//  Copyright (c) 2013 Dan Orlando. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
