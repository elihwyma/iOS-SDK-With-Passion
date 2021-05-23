/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXProvider.h>

@class CXInProcessCallSource, NSString;

@interface CXInProcessProvider : CXProvider

{
    CXInProcessCallSource *_callSource;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) CXInProcessCallSource *callSource;

- (id)initWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)hostProtocolDelegate;
- (id)initWithIdentifier:(id)arg1 callSource:(id)arg2 configuration:(id)arg3;

@end
