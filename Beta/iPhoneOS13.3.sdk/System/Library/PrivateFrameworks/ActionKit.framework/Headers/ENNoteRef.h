/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class ENLinkedNotebookRef, NSString;

@interface ENNoteRef : NSObject <Swift>

{
    long long _type;
    NSString *_guid;
    ENLinkedNotebookRef *_linkedNotebook;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *guid;
@property (retain, nonatomic) ENLinkedNotebookRef *linkedNotebook;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)noteRefFromData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asData;
- (id)wfSerializedRepresentation;

@end
