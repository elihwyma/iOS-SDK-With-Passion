/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TPSDiscoverabilitySignal : NSObject

{
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_context;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *context;

+ (id)osBuild;

- (id)initWithIdentifier:(id)arg1;
- (id)_knowledgeStore;
- (id)_discoverabilitySignalsStream;
- (void)donateSignalWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3;

@end
