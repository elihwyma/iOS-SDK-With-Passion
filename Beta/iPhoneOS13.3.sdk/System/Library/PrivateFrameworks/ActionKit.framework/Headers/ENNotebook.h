/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class EDAMLinkedNotebook, EDAMNotebook, EDAMSharedNotebook, NSString;

@interface ENNotebook : NSObject <Swift>

{
    _Bool _isShared;
    _Bool _isDefaultNotebookOverride;
    EDAMNotebook *_notebook;
    EDAMLinkedNotebook *_linkedNotebook;
    EDAMSharedNotebook *_sharedNotebook;
}

@property (retain, nonatomic) EDAMNotebook *notebook;
@property (retain, nonatomic) EDAMLinkedNotebook *linkedNotebook;
@property (retain, nonatomic) EDAMSharedNotebook *sharedNotebook;
@property (nonatomic) _Bool isShared;
@property (nonatomic) _Bool isDefaultNotebookOverride;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *ownerDisplayName;
@property (nonatomic, readonly) _Bool allowsWriting;
@property (nonatomic, readonly) _Bool isOwnShared;
@property (nonatomic, readonly) _Bool isJoinedShared;
@property (nonatomic, readonly) _Bool isPublic;
@property (nonatomic, readonly) _Bool isOwnPublic;
@property (nonatomic, readonly) _Bool isJoinedPublic;
@property (nonatomic, readonly) _Bool isBusinessNotebook;
@property (nonatomic, readonly) _Bool isOwnedByUser;
@property (nonatomic, readonly) _Bool isDefaultNotebook;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)guid;
- (_Bool)isLinked;
- (id)initWithNotebook:(id)arg1;
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2;
- (id)initWithPublicNotebook:(id)arg1 forLinkedNotebook:(id)arg2;
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2 withBusinessNotebook:(id)arg3;
- (id)initWithNotebook:(id)arg1 linkedNotebook:(id)arg2 sharedNotebook:(id)arg3;

@end
