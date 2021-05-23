/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TUISuggestedInputMode : NSObject

{
    _Bool _enabled;
    NSString *_identifier;
    NSString *_displayName;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool enabled;

@end
