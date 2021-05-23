/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SFSiriDeviceSetupGreetingDetails : NSObject

{
    NSArray *_introWordTimings;
    NSString *_dialogAText;
    NSArray *_dialogAWordTimings;
    NSArray *_dialogBPhraseTimings;
    NSArray *_dialogCPhraseTimings;
}

@property (copy, nonatomic) NSArray *introWordTimings;
@property (copy, nonatomic) NSString *dialogAText;
@property (copy, nonatomic) NSArray *dialogAWordTimings;
@property (copy, nonatomic) NSArray *dialogBPhraseTimings;
@property (copy, nonatomic) NSArray *dialogCPhraseTimings;

@end
