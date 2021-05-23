/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSMutableOrderedSet;

@interface FCSharedStringIndex : NSObject <Swift>

{
    NSMutableOrderedSet *_stringsSet;
}

@property (retain, nonatomic) NSMutableOrderedSet *stringsSet;
@property (nonatomic, readonly) NSArray *strings;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForReference:(int)arg1;
- (id)initWithStrings:(id)arg1;
- (int)referenceForString:(id)arg1;
- (int)referenceForStringReadOnly:(id)arg1;

@end
