/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString;

@interface MFStringAccumulator : NSObject

{
    NSMutableString *_mutable;
    NSString *_immutable;
}

- (id)string;
- (void)appendString:(id)arg1;

@end
