/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSURL, WFRemotePINEntryViewController;

@interface WebFilterEvaluator : NSObject

{
    unsigned long long _filterState;
    NSURL *_url;
    NSString *_pageTitle;
    NSMutableData *_buffer;
    CDUnknownBlockType _completion;
    WFRemotePINEntryViewController *_remoteViewController;
}

@property (retain, nonatomic) WFRemotePINEntryViewController *remoteViewController;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isManagedSession;
+ (id)createWithResponse:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)addData:(id)arg1;
- (void)unblockWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataComplete;
- (int)filterState;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;
- (_Bool)wasBlocked;
- (void)attemptUnblockWithCompletion:(CDUnknownBlockType)arg1;

@end
