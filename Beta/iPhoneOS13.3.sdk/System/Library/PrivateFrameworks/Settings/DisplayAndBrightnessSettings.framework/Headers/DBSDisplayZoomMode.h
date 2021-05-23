/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DBSDisplayZoomMode : NSObject

{
    unsigned long long _displayZoomOption;
    NSString *_localizedName;
    struct CGSize _size;
}

@property (nonatomic, readonly) unsigned long long displayZoomOption;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) struct CGSize size;

- (id)initWithDisplayZoomOption:(unsigned long long)arg1 localizedName:(id)arg2 size:(struct CGSize)arg3;

@end
