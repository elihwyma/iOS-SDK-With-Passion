/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (MPMediaQueryAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) _Bool isQueryResultSetInvalidated;

- (_Bool)MPIsEmpty;

@end
