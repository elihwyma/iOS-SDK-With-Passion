/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKBLBookItem : NSObject

{
    NSString *_title;
    NSString *_author;
    NSString *_path;
    NSString *_storeIdentifier;
    NSString *_identifier;
    NSString *_legacyUniqueIdentifier;
    long long _type;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *legacyUniqueIdentifier;
@property (nonatomic) long long type;

- (id)description;

@end
