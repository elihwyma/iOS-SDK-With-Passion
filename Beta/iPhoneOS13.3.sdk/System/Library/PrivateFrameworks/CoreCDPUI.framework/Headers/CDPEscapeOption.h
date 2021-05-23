/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDPEscapeOption : NSObject

{
    NSString *_title;
    unsigned long long _style;
    CDUnknownBlockType _escapeAction;
    NSString *_progressTitle;
    NSString *_progressLabel;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) CDUnknownBlockType escapeAction;
@property (copy, nonatomic) NSString *progressTitle;
@property (copy, nonatomic) NSString *progressLabel;

+ (id)cancelOption;

@end
