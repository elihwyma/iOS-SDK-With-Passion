/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface PSCapacityBarCategory : NSObject

{
    unsigned long long _bytes;
    NSString *_identifier;
    NSString *_title;
    UIColor *_color;
}

@property unsigned long long bytes;
@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (retain) UIColor *color;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 color:(id)arg3 bytes:(long long)arg4;

@end
