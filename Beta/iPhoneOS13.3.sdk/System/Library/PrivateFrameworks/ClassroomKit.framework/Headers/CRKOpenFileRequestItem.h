/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CRKOpenFileRequestItem : NSObject

{
    NSData *_fileData;
    NSString *_fileName;
}

@property (copy, nonatomic) NSData *fileData;
@property (copy, nonatomic) NSString *fileName;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
