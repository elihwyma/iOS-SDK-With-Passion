/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSInputStream, NSString;

__attribute__((visibility("hidden")))
@interface NSBatchInsertRequestEncodingToken : NSObject

{
    NSString *_entityName;
    NSArray *_objectsToInsert;
    NSInputStream *_inputStream;
    unsigned long long _resultType;
    _Bool _secure;
}

@property (retain, nonatomic, readonly) NSString *entityName;
@property (retain, nonatomic, readonly) NSArray *objectsToInsert;
@property (retain, nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) unsigned long long resultType;
@property (nonatomic, readonly) _Bool secure;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForRequest:(id)arg1;

@end
