/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PSRegion : NSObject

{
    NSString *_regionName;
    NSString *_regionCode;
}

@property (retain, nonatomic) NSString *regionName;
@property (retain, nonatomic) NSString *regionCode;

+ (id)regionWithName:(id)arg1 code:(id)arg2;

@end
