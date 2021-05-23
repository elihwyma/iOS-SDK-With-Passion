/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@class NSData, NSDate, NSString;

@protocol EDIndexableItem <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic) long long indexingType;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) unsigned long long itemInstantiationTime;
@property (nonatomic, readonly) unsigned long long estimatedSizeInBytes;
@property (retain, nonatomic) NSData *underlyingData;
@property (nonatomic, readonly) _Bool hasCompleteData;
@property (nonatomic, readonly) _Bool alwaysMarkAsIndexed;
@property (nonatomic, readonly) _Bool shouldExcludeFromIndex;
@property (nonatomic, readonly) _Bool requiresPreprocessing;

- (unsigned short)compare: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableItem;
- (unsigned short)setNeedsAllAttributesIndexingType;
- (unsigned short)fetchIndexableAttachments;

@end
