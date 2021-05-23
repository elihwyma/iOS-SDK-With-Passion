/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface NSBatchUpdateRequestEncodingToken : NSObject

{
    NSString *_entityName;
    NSPredicate *_predicate;
    NSDictionary *_columnsToUpdate;
    long long _resultType;
    _Bool _includeSubEntities;
    _Bool _secure;
}

@property (retain, nonatomic, readonly) NSString *entityName;
@property (retain, nonatomic, readonly) NSPredicate *predicate;
@property (retain, nonatomic, readonly) NSDictionary *columnsToUpdate;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) _Bool includeSubEntities;
@property (nonatomic, readonly) _Bool secure;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForRequest:(id)arg1;

@end
