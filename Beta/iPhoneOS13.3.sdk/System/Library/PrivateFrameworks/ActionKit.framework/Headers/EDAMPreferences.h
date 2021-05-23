/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSDictionary, NSNumber;

@interface EDAMPreferences : FATObject

{
    NSNumber *_updateSequenceNum;
    NSDictionary *_preferences;
}

@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSDictionary *preferences;

+ (id)structName;
+ (id)structFields;

@end
