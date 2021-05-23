/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface PPPasteboardLocationItem : NSObject

{
    NSString *_text;
    NSString *_bundleIdentifier;
    NSDate *_createdAt;
    NSDictionary *_addressComponents;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSDictionary *addressComponents;

@end
