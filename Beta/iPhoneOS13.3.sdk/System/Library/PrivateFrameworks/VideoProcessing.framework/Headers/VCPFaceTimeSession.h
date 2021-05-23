/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCPFaceTimeSession : NSObject

{
    NSMutableArray *_faces;
    NSString *_sessionID;
    NSString *_callerID;
    NSDate *_date;
}

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *callerID;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, readonly) NSArray *faces;

+ (id)session;
+ (id)sessionFromManagedObject:(id)arg1;
+ (id)createWithSessionID:(id)arg1 callerID:(id)arg2 andDate:(id)arg3;

- (id)description;
- (void)addFace:(id)arg1;
- (id)managedObjectForContext:(id)arg1;
- (id)initWithSessionID:(id)arg1 callerID:(id)arg2 andDate:(id)arg3;

@end
