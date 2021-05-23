/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface JTEffectCategory : NSObject

{
    NSString *_categoryID;
    NSString *_displayName;
    NSArray *_effectIDs;
}

@property (retain, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *effectIDs;

@end
