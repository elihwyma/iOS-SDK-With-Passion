/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutContainer : NSObject

{
    struct CGSize _contentSize;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize effectiveContentSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets effectiveContentInsets;

- (id)initWithContentSize:(struct CGSize)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2;

@end
