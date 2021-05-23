/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface MSVXPCTransaction : NSObject

{
    NSUUID *_identifier;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isActive) _Bool active;

+ (id)activeTransactions;

- (void)dealloc;
- (id)description;
- (id)_identifier;
- (id)initWithName:(id)arg1;
- (void)beginTransaction;
- (void)endTransaction;
- (void)endTransactionOnDate:(id)arg1;

@end
