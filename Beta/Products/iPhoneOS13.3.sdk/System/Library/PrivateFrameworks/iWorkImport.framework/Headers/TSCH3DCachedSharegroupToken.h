/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCachedSharegroupToken : TSCH3DSharegroupToken <TSCH3DSharegroupDelayCheckerParent> {
    TSCH3DSharegroupDelayChecker * mChecker;
    TSCH3DGPUSharegroup * mSharegroup;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteTokenSharegroup;
- (void)didRemoveAllInterests;
- (void)flushTokenSharegroup;
- (id)init;
- (void)releaseSharegroup:(id)arg1;
- (id)tokenSharegroup;
- (void)willCheckCondition;

@end