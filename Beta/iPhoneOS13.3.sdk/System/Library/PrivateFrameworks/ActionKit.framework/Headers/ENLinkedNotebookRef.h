/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSString;

@interface ENLinkedNotebookRef : NSObject <Swift>

{
    NSString *_guid;
    NSString *_noteStoreUrl;
    NSString *_shardId;
    NSString *_sharedNotebookGlobalId;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSString *sharedNotebookGlobalId;

+ (id)linkedNotebookRefFromLinkedNotebook:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
