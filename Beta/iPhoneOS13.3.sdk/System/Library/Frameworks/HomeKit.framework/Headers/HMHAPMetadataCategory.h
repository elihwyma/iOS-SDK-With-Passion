/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HMHAPMetadataCategory : NSObject

{
    NSNumber *_categoryNumber;
    NSString *_categoryType;
    NSString *_categoryDescription;
}

@property (retain, nonatomic) NSNumber *categoryNumber;
@property (retain, nonatomic) NSString *categoryType;
@property (retain, nonatomic) NSString *categoryDescription;

@end
