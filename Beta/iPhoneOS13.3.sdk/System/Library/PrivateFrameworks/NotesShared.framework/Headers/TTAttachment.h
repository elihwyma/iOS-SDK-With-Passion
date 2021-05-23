/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TTAttachment : NSObject

{
    NSString *_attachmentIdentifier;
    NSString *_attachmentUTI;
}

@property (retain, nonatomic) NSString *attachmentIdentifier;
@property (retain, nonatomic) NSString *attachmentUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;

- (_Bool)isEqualToModelComparable:(id)arg1;
- (id)attachmentInContext:(id)arg1;

@end
