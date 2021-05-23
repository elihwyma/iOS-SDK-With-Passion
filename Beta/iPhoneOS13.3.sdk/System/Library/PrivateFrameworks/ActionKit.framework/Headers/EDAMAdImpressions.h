/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMAdImpressions : FATObject

{
    NSNumber *_adId;
    NSNumber *_impressionCount;
    NSNumber *_impressionTime;
}

@property (retain, nonatomic) NSNumber *adId;
@property (retain, nonatomic) NSNumber *impressionCount;
@property (retain, nonatomic) NSNumber *impressionTime;

+ (id)structName;
+ (id)structFields;

@end
