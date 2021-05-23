/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@protocol FCPrivateDataSyncManager <Swift>

- (unsigned short)isDirty;
- (unsigned short)notifyObservers;
- (unsigned short)markAsDirty;
- (unsigned short)isAwaitingFirstSync;
- (unsigned short)fetchChangesWithContext:qualityOfService:completionHandler: /* Error: Ran out of types for this method. */;

@end
