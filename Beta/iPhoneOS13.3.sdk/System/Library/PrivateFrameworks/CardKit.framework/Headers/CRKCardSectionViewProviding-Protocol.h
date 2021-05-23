/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <CardKit/Swift-Protocol.h>

@class NSArray;

@protocol CRCard;

@protocol CRKCardSectionViewProviding <Swift>

@property (nonatomic, readonly) id <CRCard> card;
@property (nonatomic, readonly) NSArray *viewConfigurations;

@end
