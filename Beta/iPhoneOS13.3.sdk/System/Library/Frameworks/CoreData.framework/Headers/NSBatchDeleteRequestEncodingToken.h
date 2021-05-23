/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NSBatchDeleteRequestEncodingToken : NSObject

{
    NSData *_fetchData;
    long long _resultType;
    _Bool _secure;
}

@property (retain, nonatomic, readonly) NSData *fetchData;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) _Bool secure;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForRequest:(id)arg1;

@end
