/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol HKJSONVisitorDelegate;

@interface HKJSONVisitor : NSObject

{
    id <HKJSONVisitorDelegate> _delegate;
    id _JSONObject;
    NSString *_currentKeyPath;
    NSArray *_allKeyPathComponents;
    long long _currentIndex;
}

@property (copy, nonatomic, readonly) NSString *currentKeyPath;
@property (copy, nonatomic, readonly) NSString *lastKeyPathComponent;
@property (copy, nonatomic, readonly) NSArray *allKeyPathComponents;
@property (nonatomic, readonly) long long currentIndex;

+ (id)visitorWithJSONObject:(id)arg1 delegate:(id)arg2 error:(id *)arg3;

- (id)valueForKeyPath:(id)arg1;
- (long long)_traverseJSONObject:(id)arg1;
- (long long)_visitDictionary:(id)arg1;
- (long long)_visitArray:(id)arg1;
- (long long)_visitPrimitive:(id)arg1;
- (void)traverseJSONObject;

@end
