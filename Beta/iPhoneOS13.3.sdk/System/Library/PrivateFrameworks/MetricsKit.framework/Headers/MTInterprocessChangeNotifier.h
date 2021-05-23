/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTInterprocessChangeNotifier : NSObject

{
    NSString *_identifier;
    int _token;
}

- (void)dealloc;
- (void)stop;
- (void)notify;
- (id)initWithIdentifier:(id)arg1 onChange:(CDUnknownBlockType)arg2;

@end
