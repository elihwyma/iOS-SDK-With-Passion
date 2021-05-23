/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSOrderedSet;

@protocol _UIDiffableDataSourceUpdate <Swift>

@property (nonatomic, readonly) _Bool isSectionOperation;
@property (nonatomic, readonly) NSOrderedSet *identifiers;
@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) long long relativePosition;
@property (nonatomic, readonly) id destinationIdentifier;
@property (nonatomic, readonly) _Bool destinationIdentifierIsSectionIdentifier;

@end
