/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/Swift-Protocol.h>

@class NSSet;

@protocol CoreDAVContainerMultiGetSubmittable <Swift>

@property (nonatomic, readonly) NSSet *missingURLs;
@property (nonatomic, readonly) NSSet *deletedURLs;
@property (nonatomic, readonly) NSSet *parsedContents;
@property (nonatomic) _Bool shouldIgnoreResponseErrors;

@end
