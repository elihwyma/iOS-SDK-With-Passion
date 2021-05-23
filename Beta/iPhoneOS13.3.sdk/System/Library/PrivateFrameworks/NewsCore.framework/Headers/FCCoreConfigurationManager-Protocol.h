/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@protocol FCCoreConfiguration;

@protocol FCCoreConfigurationManager <Swift>

@property (nonatomic, readonly) id <FCCoreConfiguration> configuration;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConfigurationIfNeededWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConfigurationIfNeededWithCompletionQueue:completion: /* Error: Ran out of types for this method. */;

@end
