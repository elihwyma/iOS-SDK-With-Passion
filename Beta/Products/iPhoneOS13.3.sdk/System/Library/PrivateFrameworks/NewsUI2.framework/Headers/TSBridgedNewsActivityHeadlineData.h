/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface TSBridgedNewsActivityHeadlineData : NSObject {
    void articleContext;
    void articleID;
    void articlePresentationStyle;
    void forceArticleUpdate;
    void headline;
    void showShareSheet;
}

@property (nonatomic, readonly) TSArticleContext *articleContext;
@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) long long articlePresentationStyle;
@property (nonatomic, readonly) bool forceArticleUpdate;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) bool showShareSheet;

- (void).cxx_destruct;
- (id)articleContext;
- (id)articleID;
- (long long)articlePresentationStyle;
- (bool)forceArticleUpdate;
- (id)headline;
- (id)init;
- (long long)presentationReason;
- (bool)showShareSheet;

@end