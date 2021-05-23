/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SXBookmarkManager : NSObject

{
    NSMutableDictionary *_applicators;
}

@property (nonatomic, readonly) NSMutableDictionary *applicators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)applyBookmark:(id)arg1;
- (void)registerApplicator:(id)arg1 bookmarkType:(Class)arg2;

@end
