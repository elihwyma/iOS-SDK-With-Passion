/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TUDiscoverabilitySignal : NSObject

{
    NSString *_identifier;
    NSString *_context;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *context;

+ (id)osBuild;

- (id)_discoverabilitySignalsStream;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;
- (void)donateSignalWithCompletion:(CDUnknownBlockType)arg1;

@end
