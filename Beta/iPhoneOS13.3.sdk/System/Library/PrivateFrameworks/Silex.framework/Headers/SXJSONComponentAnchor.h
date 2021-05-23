/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXJSONComponentAnchor : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long targetAnchorPosition;
@property (nonatomic, readonly) long long originAnchorPosition;
@property (nonatomic, readonly) NSString *targetComponentIdentifier;
@property (nonatomic, readonly) struct _NSRange range;

- (long long)anchorAlignmentForString:(id)arg1;
- (long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2;
- (long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2;

@end
