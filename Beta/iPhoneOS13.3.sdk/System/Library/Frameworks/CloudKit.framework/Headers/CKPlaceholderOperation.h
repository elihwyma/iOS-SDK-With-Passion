/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSOperation.h>

@class NSDate, NSObject, NSString;

@protocol OS_dispatch_group;

@interface CKPlaceholderOperation : NSOperation

{
    NSObject<OS_dispatch_group> *_group;
    _Bool _isFinished;
    _Bool _isExecuting;
    _Bool _finishInvoked;
    NSString *_sectionID;
    id _context;
    NSDate *_startDate;
    NSString *_operationID;
    CDUnknownBlockType _daemonInvokeBlock;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) id context;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) CDUnknownBlockType daemonInvokeBlock;
@property (nonatomic) _Bool finishInvoked;
@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;

- (id)description;
- (void)start;
- (void)main;
- (_Bool)isConcurrent;
- (void)finish;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(CDUnknownBlockType)arg2;

@end
