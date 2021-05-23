/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, PRSSearchFeedback, PRSSearchSession;

@protocol OS_dispatch_queue, PRSSearchQueryHandler;

@interface PRSQueryTask : NSObject

{
    _Bool _started;
    _Bool _canceled;
    _Bool _webSearch;
    long long _queryId;
    NSDictionary *_category_stats;
    NSDictionary *_server_features;
    NSArray *_parsecCategoryOrder;
    id _representedObject;
    NSString *_keyboardLanguage;
    double _scaleFactor;
    NSString *_queryString;
    unsigned long long _queryIdent;
    PRSSearchFeedback *_feedback;
    id <PRSSearchQueryHandler> _handler;
    NSObject<OS_dispatch_queue> *_queue;
    PRSSearchSession *_session;
    NSString *_fbq;
}

@property (nonatomic) _Bool started;
@property (nonatomic) _Bool canceled;
@property (retain) PRSSearchFeedback *feedback;
@property (retain, nonatomic) id <PRSSearchQueryHandler> handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) PRSSearchSession *session;
@property (retain, nonatomic) NSString *fbq;
@property _Bool webSearch;
@property long long queryId;
@property (retain, nonatomic) NSDictionary *category_stats;
@property (retain, nonatomic) NSDictionary *server_features;
@property (retain, nonatomic) NSArray *parsecCategoryOrder;
@property (weak, nonatomic) id representedObject;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property double scaleFactor;
@property (retain, nonatomic) NSString *queryString;
@property unsigned long long queryIdent;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)suspendDecoding;
+ (void)resumeDecoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (void)resume;
- (void)invalidateHandler;
- (id)feedbackQueryIdentifier;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4;

@end
