/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSData;

@protocol FCMagazinesConfigurationManager <Swift>

@property (nonatomic, readonly) NSData *magazinesConfigurationData;
@property (nonatomic, readonly) NSArray *treatmentIDs;
@property (nonatomic, readonly) NSArray *segmentSetIDs;

- (unsigned short)fetchMagazinesConfigurationIfNeededWithCompletionQueue:completion: /* Error: Ran out of types for this method. */;

@end
