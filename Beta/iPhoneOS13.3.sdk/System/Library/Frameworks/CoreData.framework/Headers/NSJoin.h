/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSJoin : NSObject <Swift>

{
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}

+ (id)joinWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;
- (id)sourceAttributeName;
- (id)destinationAttributeName;

@end
