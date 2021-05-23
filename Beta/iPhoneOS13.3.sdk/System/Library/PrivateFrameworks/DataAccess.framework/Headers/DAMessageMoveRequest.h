/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMessageMoveRequest : NSObject

{
    NSString *_message;
    NSString *_fromFolder;
    NSString *_toFolder;
    id _context;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *fromFolder;
@property (copy, nonatomic) NSString *toFolder;
@property (retain, nonatomic) id context;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;

@end
