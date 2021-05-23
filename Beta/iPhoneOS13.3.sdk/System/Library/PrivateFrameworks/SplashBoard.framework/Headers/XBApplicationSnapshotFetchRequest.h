/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, XBApplicationSnapshotGenerationContext, XBApplicationSnapshotPredicate;

@interface XBApplicationSnapshotFetchRequest : NSObject

{
    XBApplicationSnapshotPredicate *_predicate;
    NSArray *_sortDescriptors;
    XBApplicationSnapshotGenerationContext *_fallbackGenerationContext;
}

@property (copy, nonatomic, readonly) NSArray *NSSortDescriptors;
@property (retain, nonatomic) XBApplicationSnapshotPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) XBApplicationSnapshotGenerationContext *fallbackGenerationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fetchRequest;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
