/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSString;

@interface FCFeedViewportPersistenceGap : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_firstGroupID;
    NSString *_lastGroupID;
    NSArray *_hiddenElements;
}

@property (copy, nonatomic, readonly) NSString *firstGroupID;
@property (copy, nonatomic, readonly) NSString *lastGroupID;
@property (copy, nonatomic, readonly) NSArray *hiddenElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long feedElementType;
@property (copy, nonatomic, readonly) NSString *identifier;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithIdentifier:(id)arg1;
- (id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 hiddenElements:(id)arg3;
- (id)copyWithHiddenElements:(id)arg1;
- (_Bool)isGap;
- (id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 hiddenElements:(id)arg4;

@end
