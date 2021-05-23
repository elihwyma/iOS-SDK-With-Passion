/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSString;

@interface ICSQLitePreparedStatement : NSObject

{
    const void *_connectionPointer;
    NSString *_SQL;
}

@property (nonatomic, readonly) const void *connectionPointer;
@property (copy, nonatomic, readonly) NSString *SQL;

- (id)initWithConnection:(const void *)arg1 SQL:(id)arg2;

@end
