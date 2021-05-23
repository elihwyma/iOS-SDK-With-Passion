/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NSCoreDataXPCMessage : NSObject

{
    unsigned long long _messageCode;
    NSData *_messageBody;
    NSString *_token;
    NSString *_contextName;
    NSString *_contextTransactionAuthor;
    NSString *_processName;
}

@property unsigned long long messageCode;
@property (retain, nonatomic) NSData *messageBody;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *contextName;
@property (retain, nonatomic) NSString *contextTransactionAuthor;
@property (retain, nonatomic) NSString *processName;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
