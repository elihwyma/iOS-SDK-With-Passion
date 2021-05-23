/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface NEDNSQuery : NSObject

{
    NSString *_name;
    long long _recordType;
    long long _recordClass;
    NSData *_answerData;
}

@property (readonly) NSString *name;
@property (readonly) long long recordType;
@property (readonly) long long recordClass;
@property (copy) NSData *answerData;

- (id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3;
- (id)createAnswer;

@end
