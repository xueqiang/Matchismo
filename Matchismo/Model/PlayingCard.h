//
//  PlayingCard.h
//  Matchismo
//
//  Created by wxq std on 17/11/13.
//  Copyright (c) 2013 wxq. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+(NSArray *)validSuits;
+(NSUInteger)maxRank;

@end
