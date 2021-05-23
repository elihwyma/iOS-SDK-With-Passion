/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSPredicate;

@interface EDMessageQueryParserObject : NSObject

{
    unsigned long long _queryType;
    NSPredicate *_predicate;
}

@property (nonatomic, readonly) unsigned long long queryType;
@property (nonatomic, readonly) NSPredicate *predicate;

- (id)initWithQueryType:(unsigned long long)arg1 predicate:(id)arg2;

@end
