/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceUpdate : NSObject

{
    _Bool _isSectionOperation;
    _Bool _destinationIdentifierIsSectionIdentifier;
    NSOrderedSet *_identifiers;
    long long _action;
    long long _relativePosition;
    id _destinationIdentifier;
}

@property (nonatomic, readonly) _Bool isSectionOperation;
@property (nonatomic, readonly) NSOrderedSet *identifiers;
@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) long long relativePosition;
@property (nonatomic, readonly) id destinationIdentifier;
@property (nonatomic, readonly) _Bool destinationIdentifierIsSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithItemIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2;
- (id)initWithSectionIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2;
- (void)_throwIfInvalid;
- (id)initWithIdentifiers:(id)arg1 sectionIdentifiers:(id)arg2 action:(long long)arg3 desinationIdentifier:(id)arg4 relativePosition:(long long)arg5 destinationIsSection:(_Bool)arg6;

@end
