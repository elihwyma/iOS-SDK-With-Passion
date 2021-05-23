/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HLPHelpUsageController : NSObject

{
    NSString *_identifier;
    NSString *_version;
}

- (void)increaseUsageCountForKey:(id)arg1;
- (id)initWithIndentifier:(id)arg1 version:(id)arg2;

@end
